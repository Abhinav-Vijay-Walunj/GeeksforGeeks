/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    
public:
    unordered_map<Node*,Node*> hash;
    Node *cloneGraph(Node *node) {
       if (!node) return node;
       if(hash.find(node) == hash.end()) {
           hash[node] = new Node(node -> val);
           for (auto x : node -> neighbors) {
                (hash[node] -> neighbors).push_back( cloneGraph(x) );
           }
       }
       return hash[node];
    }/*
    Node* cloneGraph(Node* node) {
        if (!node) {
            return NULL;
        }
         unordered_map<Node*, Node*> copies;
        if (copies.find(node) == copies.end()) {
            copies[node] = new Node(node -> val, {});
            for (Node* neighbor : node -> neighbors) {
                copies[node] -> neighbors.push_back(cloneGraph(neighbor));
            }
        }
        return copies[node];
    }*/
};
/*
private:
   
};
*/