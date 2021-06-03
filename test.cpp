//  两数之和 暴力法
// class Solution {
// public:
//     /**
//      * 
//      * @param numbers int整型vector 
//      * @param target int整型 
//      * @return int整型vector
//      */
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         // write code here
//         vector<int>obj;
//         for(int i=0;i<numbers.size();i++)
//         {
//             for(int j=i+1;j<numbers.size();j++)
//             {
//                 if(numbers[i]+numbers[j]==target)
//                 {
//                     if(i<j)
//                     {
//                         obj.push_back(i+1);
//                         obj.push_back(j+1);
//                     }
//                     else
//                     {
//                         obj.push_back(j+1);
//                         obj.push_back(i+1);
//                     }
//                 }
                    
//             }
//         }
//         return obj;
//     }
// };


/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */




///////////////// 反转链表 2021.6.1
// /** 头插法
//  * 
//  * @param pHead ListNode类 
//  * @return ListNode类
//  */
// struct ListNode* ReverseList(struct ListNode* pHead ) {
//     // write code here
//     struct ListNode *p,*q=NULL,*qHead=NULL;
//     while(pHead!=q)
//     {
//         p=pHead;
//         while(p->next!=q) p=p->next;
//         if(qHead==NULL)
//         { 
//             qHead=p;
//             q=qHead;
//         }
//         else
//         {
//             q->next=p;
//             q=q->next;
//             if(q==pHead)
//                 q->next=NULL;
//         }
//     }

//     return qHead;
    
// }

 
// /** 尾插法
//  * struct ListNode {
//  *	int val;
//  *	struct ListNode *next;
//  * };
//  */

// /**
//  * 
//  * @param pHead ListNode类 
//  * @return ListNode类
//  */
// struct ListNode* ReverseList(struct ListNode* pHead ) {
//     // write code here
//     struct ListNode *p,*q=NULL,*qHead=NULL,*pre=NULL;
//     p=pHead;
//     while(p!=NULL)
//     {
//         q=p;
        
//         p=p->next;
//         q->next=pre;
//         pre=q;
       
//     }
//     return q;
    
// }


/// C++ 括号匹配
// class Solution {
// public:
//     /**
//      * 
//      * @param s string字符串 
//      * @return bool布尔型
//      */
//     bool isValid(string s) {
//         // write code here
//         int len;
//         stack<char> stack;
//         len=s.size();
//         for(int i=0;i<len;i++)
//         {
//             if(s[i]=='{' || s[i] == '[' || s[i] == '(')
//             {
//                 stack.push(s[i]);
//             }
//             else
//             {
//                 if(stack.empty())
//                     return false;
//                 if((stack.top()=='{' && s[i]=='}')||(stack.top()=='[' && s[i]==']')||(stack.top()=='(' && s[i]==')'))
//                     stack.pop();
//                 else
//                     return false;
//             }
//         }
//         if(stack.empty())
//             return true;
//         else 
//             return false;
        
//     }
// };


////////  数组中出现次数超过一半的数字（暴力法）
// /**
//  * 
//  * @param numbers int整型一维数组 
//  * @param numbersLen int numbers数组长度
//  * @return int整型
//  */
// int MoreThanHalfNum_Solution(int* numbers, int numbersLen ) {
//     // write code here
//     int max=0;
//     int max_val=0;
//     int count=0;
//     for(int i=0;i<numbersLen;i++)
//     {
//         count =0;
//         for(int j=0;j<numbersLen;j++)
//         {
//             if(numbers[j]==numbers[i])
//             {
//                 count++;
//             }
//         }
//         if(count>max)
//         {
//             max = count;
//             max_val= numbers[i];
//         }
//     }
//     return max_val;
// }

#include<iostream>
int main() {
    stack<char> stack

}
