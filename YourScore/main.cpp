#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // total_grade, total_score를 0으로 초기화합니다.
    double total_grade = 0;
    int total_score = 0;
    // 20번 반복한다.
    for (int i = 0; i < 20; ++i) {
        // 과목명 class_name:string, 학점 score:int, 과목평점 grade:string를 입력받는다.
        std::string class_name, grade;
        double score = 0;
        std::cin >> class_name >> score >> grade;
        // grade가 P면 continue한다.
        if (grade == "P")
            continue;
        // total_score에 score를 더한다.
        total_score += score;
        // grade를 점수로 치환하여 grade_score에 답는다.
        double grade_score = 0.0;
        if (grade == "A+")
            grade_score = 4.5;
        else if (grade == "A0")
            grade_score = 4.0;
        else if (grade == "B+")
            grade_score = 3.5;
        else if (grade == "B0")
            grade_score = 3.0;
        else if (grade == "C+")
            grade_score = 2.5;
        else if (grade == "C0")
            grade_score = 2.0;
        else if (grade == "D+")
            grade_score = 1.5;
        else if (grade == "D0")
            grade_score = 1.0;
        else
            grade_score = 0.0;
        // total_grade에 score * grade_score를 더한다.
        total_grade += score * grade_score;
    }
    // cout의 출력 정확도를 6자리로 한다.
    std::cout.precision(7);
    // total_grade 를 total_score로 나눈 값을 출력한다.
    std::cout << total_grade / total_score;
    return 0;
}
