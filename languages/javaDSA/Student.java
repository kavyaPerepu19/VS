public class Student extends Person {
    private int year;
    private char section;
    private double cgpa;
    private int[] noOfGrades;
    private double fees;
    public boolean isPaid = false;

    public Student(String name, int age, String gender, double weight, String nationality, int year, char section, double cgpa, int[] noOfGrades) {
        super(name, age, gender, weight, nationality);
        this.year = year;
        this.section = section;
        this.cgpa = cgpa;
        this.noOfGrades = noOfGrades;
        this.fees = calculateFees();
    }

    private double calculateFees() {
        switch (year) {
            case 1:
                return 20000;
            case 2:
                return 30000;
            case 3:
                return 40000;
            case 4:
                return 35000;
            default:
                return 0;
        }
    }

    public void calculatePercentage() {
        int totalGrades = 0;
        int totalPoints = 0;

        for (int grade : noOfGrades) {
            totalGrades += grade;
            totalPoints += grade * 10;
        }

        double updatedCgpa = (double) totalPoints / (totalGrades * 10);
        this.cgpa = updatedCgpa;
    }

    public boolean applyForPostGraduate() {
        return year == 4 && cgpa > 8.0;
    }

    public double getCgpa() {
        return cgpa;
    }

    public double getFees() {
        return fees;
    }

    public void setFees(double fees) {
        this.fees = fees;
    }

    public void paidFees(float amount) {
        if (amount >= fees) {
            isPaid = true;
            System.out.println(getName() + " has paid the fees.");
        } else {
            System.out.println(getName() + " has not paid enough fees.");
        }
    }

    @Override
    public void canVote() {
        if (getAge() >= 18 && getNationality().equalsIgnoreCase("Indian") && isPaid) {
            System.out.println(getName() + " can vote.");
        } else {
            System.out.println(getName() + " cannot vote.");
        }
    }
}
