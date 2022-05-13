# WeeklyTask

>Week1. 1032번: 명령 프롬프트 https://www.acmicpc.net/problem/1032

간단한 문자열 비교 문제





>Week2. 2204번: 도비의 난독증 테스트 https://www.acmicpc.net/problem/2204

1. 대소문자 변환
```C++
// 소문자 -> 대문자
for (int i = 0; i < s.length(); i++) {
	if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] + 'A' - 'a';
}
// 대문자 -> 소문자
for (int i = 0; i < s.length(); i++) {
	if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 'a' - 'A';
}
```
2. map: key값을 기준으로 insert할 때 자동으로 정렬 됨
```C++
// insert
m.insert({ key, value })

// key & value를 찾을 때는 반복자(iterator) 사용해서 순회
m.begin()->first // key
m.begin()->second // value

//전체 값 출력하기
for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
	cout << iter->first << " " << iter->second << endl;
}

