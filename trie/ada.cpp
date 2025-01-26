#include <bits/stdc++.h>
 
using namespace std;
 
struct TrieNode {
    struct TrieNode* children[26];
 
    int wordCount;
 
    TrieNode() {
        wordCount = 0;
        for (int i=0; i<26; i++) {
            children[i] = nullptr;
        }
    }
};
 
void insert_key (TrieNode* root, string key) {
    
    TrieNode* currentNode = root;
 
    for (const auto &ch : key) {
        
        if (currentNode->children[ch - 'a'] == nullptr) {
            TrieNode* newNode = new TrieNode();
 
            currentNode->children[ch - 'a'] = newNode;
        }
 
        currentNode = currentNode->children[ch - 'a'];
        currentNode->wordCount++;
 
    }
 
    //currentNode->wordCount++;
 
}
 
int search_key(TrieNode* root, string key) {
 
    TrieNode* currentNode = root;
 
    int ans = 0;
 
    for (const auto& ch:key) {
 
        if (currentNode->children[ch - 'a'] == nullptr) {
            return 0;
        }
 
        currentNode = currentNode->children[ch - 'a'];
 
    }
 
    return currentNode->wordCount;
 
 
}
 
 
 
int main() {
    TrieNode* root = new TrieNode();
 
    int n, k;
    cin >> n >> k;
 
    for (int i=0; i<n; i++) {
        string word;
        cin >> word;
        insert_key(root, word);
    }
 
    for (int i=0; i<k; i++) {
        string word;
        cin >> word;
        cout << search_key(root, word) << "\n";
    }
 
 
    return 0;
}