#include <iostream>    // ইনপুট-আউটপুটের জন্য
#include <string>      // string টাইপের জন্য
using namespace std;

// ফাংশন: কোনো ক্যারেক্টার repeat করে কিনা
bool hasDuplicate(string s) {
    int freq[256] = {0};  // 256 সাইজের অ্যারে, প্রতিটা ASCII অক্ষরের জন্য

    for (char c : s) {
        freq[c]++;        // প্রতিটা অক্ষরের হিসাব রাখছে

        if (freq[c] > 1)  // যদি ১ বার এর বেশি আসে
            return true;
    }

    return false;  // কোনো কিছুই ২ বার আসেনি
}

int main() {
    int t;
    cin >> t;  // কয়টা টেস্ট কেস আছে

    while (t--) {
        int len;
        string str;
        cin >> len >> str;  // স্ট্রিং-এর দৈর্ঘ্য আর স্ট্রিং ইনপুট নিচ্ছে

        if (hasDuplicate(str)) {
            cout << "YES" << endl;  // যদি duplicate থাকে
        } else {
            cout << "NO" << endl;   // না থাকলে
        }
    }

    return 0;
}
