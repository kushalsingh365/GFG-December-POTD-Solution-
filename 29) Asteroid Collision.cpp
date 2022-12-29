class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
         stack<int> st;

        for(int i=0; i<N; i++){

            if(asteroids[i] == 0){

                continue;

            }

            if(asteroids[i] > 0){

                st.push(asteroids[i]);

            }

            else{

                if(!st.empty() && st.top() < 0){

                    st.push(asteroids[i]);

                    continue;

                }

                while(!st.empty() && st.top() < -asteroids[i]){

                    if(st.top() < 0){

                        st.push(asteroids[i]);

                        break;

                    }

                    st.pop();

                }

                if(!st.empty() && st.top() == -asteroids[i]){

                    st.pop();

                    continue;

                }

                if(st.empty()){

                    st.push(asteroids[i]);

                }

            }

        }

        vector<int> ans;

        while(!st.empty()){

            int val = st.top();

            st.pop();

            ans.push_back(val);

        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
