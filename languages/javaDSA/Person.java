public class Person {
    private String name;
    private int age;
    private String gender;
    private double weight;
    private String nationality;

    public Person(String name, int age, String gender, double weight, String nationality) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.weight = weight;
        this.nationality = nationality;
    }

    public void canVote() {
        if (age >= 18 && nationality.equalsIgnoreCase("Indian")) {
            System.out.println(name + " can vote.");
        } else {
            System.out.println(name + " cannot vote.");
        }
    }

    // Getter and setter methods
    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getGender() {
        return gender;
    }

    public double getWeight() {
        return weight;
    }

    public String getNationality() {
        return nationality;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public void setWeight(double weight) {
        this.weight = weight;
    }

    public void setNationality(String nationality) {
        this.nationality = nationality;
    }
}
