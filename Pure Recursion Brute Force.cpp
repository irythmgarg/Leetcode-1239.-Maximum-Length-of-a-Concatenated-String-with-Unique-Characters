class Solution {
public:
    // Helper function to check if combining two strings results in a unique character string
    bool unique(string &s1, string &s2) {
        unordered_set<char> st;

        // Insert characters from s1 into the set and check for duplicates
        for (int i = 0; i < s1.length(); i++) {
            if (st.find(s1[i]) == st.end())
                st.insert(s1[i]);
            else
                return false;  // Duplicate found in s1
        }

        // Insert characters from s2 and check for overlap with s1
        for (int i = 0; i < s2.length(); i++) {
            if (st.find(s2[i]) == st.end())
                st.insert(s2[i]);
            else
                return false;  // Duplicate character found between s1 and s2
        }

        return true;  // All characters are unique
    }

    // Recursive function to explore all subsets and track the maximum valid length
    int find(vector<string>& arr, int i, string temp) {
        // Base case: all elements considered
        if (i >= arr.size()) {
            return temp.length();  // Return length of the current concatenated string
        }

        int take = 0;

        // Try to include arr[i] if it forms a unique-character string with temp
        if (unique(temp, arr[i])) {
            take = find(arr, i + 1, temp + arr[i]);
        }

        // Option to skip the current string
        int nottake = find(arr, i + 1, temp);

        // Return the maximum of including or not including the current string
        return max(take, nottake);
    }

    // Main function to start the recursive exploration
    int maxLength(vector<string>& arr) {
        string temp = "";  // Temporary string to build combinations
        return find(arr, 0, temp);
    }
};
