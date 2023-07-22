// // Coding nijja problem 
// #include <bits/stdc++.h> 
// // Implement class for minStack.
// class minStack
// {
// 	// Write your code here.
	
// 	public:
// 		stack<int> st;
// 		stack<int> minst;
// 		// Constructor
// 		minStack() 
// 		{ 
// 			// Write your code here.
// 		}
		
// 		// Function to add another element equal to num at the top of stack.
// 		void push(int num)
// 		{
// 			st.push(num);

// 			if(minst.empty() || num <= minst.top()){

// 				minst.push(num);
// 			}
// 		}
// 		// Function to remove the top element of the stack.
// 		int pop()
// 		{
// 			if(st.empty()) return -1;
				
// 			int stacktop = st.top();
// 			st.pop();

// 			if(minst.top() == stacktop){
// 				minst.pop();
// 			}
// 			return stacktop;
// 		}

		
// 		// Function to return the top element of stack if it is present. Otherwise return -1.
// 		int top()
// 		{
// 			if(st.empty()) return -1;
// 			else{
// 				return st.top();
// 			}
// 		}
		
// 		// Function to return minimum element of stack if it is present. Otherwise return -1.
// 		int getMin()
// 		{
// 			if(st.empty()) return -1;
// 			else{
// 				return minst.top();
// 			}

// 		}
// };