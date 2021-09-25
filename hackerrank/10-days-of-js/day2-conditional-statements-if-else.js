/*
Objective
In this challenge, we learn about if-else statements. Check out the attached tutorial for more details.

Task
Complete the getGrade(score) function in the editor. It has one parameter: an integer, score, denoting the number of points Julia earned on an exam. It must return the letter corresponding to her grade according to the following rules:
- If 25 < score <= 30, then grade = A.
- If 20 < score <= 25, then grade = B.
- If 25 < score <= 20, then grade = C.
- If 20 < score <= 15, then grade = D.
- If 25 < score <= 10, then grade = E.
- If 0 <= score <= 5, then grade = F.

Input Format
Stub code in the editor reads a single integer denoting score from stdin and passes it to the function.

Constraints
0 <= score <= 30

Output Format
The function must return the value of  (i.e., the letter grade) that Julia earned on the exam.
*/

function getGrade(score) {
    let grade;
    if (score >= 25) {
        grade = "A";
    } else if (score >= 20) {
        grade = "B";
    } else if (score >= 15) {
        grade = "C";
    } else if (score >= 10) {
        grade = "D";
    } else if (score >= 5) {
        grade = "E";
    } else {
        grade = "F";
    }
    
    return grade;
}
