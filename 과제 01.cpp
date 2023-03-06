//과제 01.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string myMbti = "ISFJ";  // 자신의 MBTI 유형
    string filename = "mbti.txt";
    ifstream mbtiFile(filename);  // MBTI 데이터 파일 열기


    string name, mbti;
    cout << "Friends with " << myMbti << " MBTI:" << endl;
    if (mbti == myMbti && name != "이채영")
    {
        cout << name << endl;  // 자신과 같은 MBTI 친구의 이름 출력
    }

    mbtiFile.close();  // 파일 닫기
    return 0;
}
