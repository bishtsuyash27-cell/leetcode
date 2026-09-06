/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node*dummy  = new Node(-1);
        Node * temp = head ;

        Node * temp2 = dummy ;
        while(temp!=NULL){
            Node * data = new Node(temp->val);
            temp2->next = data ;
            temp2 = temp2->next ;
            temp = temp->next ;
        }
        dummy = dummy->next ;

        unordered_map<Node*,Node*>mp ;

        Node * tempa = head ;
        Node * tempb = dummy ;

        while(tempa!=NULL){
            mp[tempa] = tempb ;
            tempa = tempa->next ;
            tempb = tempb->next ;
        }

        for(auto ele:mp){
            if(ele.first->random!=NULL){
            Node * original_random = ele.first->random ;
            Node * duplicate_random  = mp[original_random];
            ele.second->random = duplicate_random;
            }
        }


return dummy ;
    }
};