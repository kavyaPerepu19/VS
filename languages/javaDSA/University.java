public class University {
    public static void main(String[] args) {
        int[] studentGrades = {8, 9, 7}; // Example grades array

        // Creating scholarship students
        ScholarshipStudent s1 = new ScholarshipStudent("Pragnya", 20, "Female", 55.0, "Indian", 3, 'A', 8.9, studentGrades);
        ScholarshipStudent s2 = new ScholarshipStudent("Sameul", 19, "Male", 60.0, "African", 2, 'B', 7.2, studentGrades);
        ScholarshipStudent s3 = new ScholarshipStudent("Tikku", 22, "Male", 65.0, "Indian", 4, 'C', 9.2, studentGrades);

        // Creating regular students
        Student s4 = new Student("Pankaj", 21, "Male", 70.0, "Indonesian", 4, 'D', 8.8, studentGrades);
        Student s5 = new Student("Jim", 20, "Male", 68.0, "Canadian", 3, 'B', 8.9, studentGrades);
        Student s6 = new Student("Seema", 23, "Female", 60.0, "Indian", 4, 'A', 9.9, studentGrades);

        // Check and make students eligible to vote
        makeEligibleToVote(s1);
        makeEligibleToVote(s2);
        makeEligibleToVote(s3);
        makeEligibleToVote(s4);
        makeEligibleToVote(s5);
        makeEligibleToVote(s6);
    }

    // Method to make students eligible to vote
    public static void makeEligibleToVote(Student student) {
        student.canVote();
        if (!student.isPaid && student.getNationality().equalsIgnoreCase("Indian")) {
            student.paidFees((float)student.getFees());
        }
    }
}
