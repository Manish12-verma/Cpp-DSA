 #include <bits/stdc++.h>

 vector<int> nextSmaller(vector<int>arr, int n)

{
    stack<int> s;

    s.push(-1);

    vector<int>ans(n);

    for(int i=n-1; i>=0; i--){

        int cur=arr[i];

        while(s.top() !=-1 && arr[s.top()]>= cur){

            s.pop();

        }

        ans[i]=s.top();

        s.push(i);

    }

    return ans;

}

vector<int> prevSmaller(vector<int>arr, int n){

    stack<int> s;

    s.push(-1);
    vector<int>ans(n);

    for(int i=0; i<n; i++){

        int cur=arr[i];

        while(s.top() !=-1 && arr[s.top()]>= cur){

            s.pop();

        }

        ans[i]=s.top();

        s.push(i);

    }

    return ans;

}

 int largestRectangle(vector < int > & heights) {

     int n=heights.size();

        vector<int>next(n);

        next = nextSmaller(heights,n);//for storing index of next smaller

 

        vector<int>prev(n);

        prev = prevSmaller(heights, n);//for storing index of pre smaller index

        int area = INT_MIN;

        for(int i=0; i<n; i++){

            //calculate area

            int l = heights[i];

            

            //one case when all the elements are same like [2,2,2,2] then

            //next will be [-1,-1,-1,-1] =prev which will give width =-1

            if(next[i]==-1){

                next[i]=n;

            }

            int b = next[i]-prev[i]-1;  //b=n-p-1

            int newArea = l*b;

            area = max(area, newArea);

 

        }
        return area;

 }

