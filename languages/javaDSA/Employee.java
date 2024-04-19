public class Employee {
    int empId;
    String name;
    double salary;

    double getSalary() {
        return salary;
    }

    void setSalary(double salary) {
        this.salary = salary;
    }

    int getEmpId() {
        return empId;
    }

    void setEmpId(int empId) {
        this.empId = empId;
    }

    String getName() {
        return name;
    }

    void setName(String name) {
        this.name = name;
    }
}

class PermanentEmployee extends Employee {
    double basicPay;
    double hra;
    int experience;

    double getBasicPay() {
        return basicPay;
    }

    void setBasicPay(double basicPay) {
        this.basicPay = basicPay;
    }

    double getHra() {
        return hra;
    }

    void setHra(double hra) {
        this.hra = hra;
    }

    int getExperience() {
        return experience;
    }

    void setExperience(int experience) {
        this.experience = experience;
    }

    void calculateSalary() {
        int vc = 0;
        if (experience < 3) {
            vc = 0;
        } else if (experience >= 3 && experience < 5) {
            vc = 5;
        } else if (experience >= 5 && experience < 10) {
            vc = 7;
        } else {
            vc = 12;
        }
        salary = (vc * basicPay / 100) + basicPay + hra;
        setSalary(salary);
    }
}

class ContractEmployee extends Employee {
    double wages;
    int hours;

    double getWages() {
        return wages;
    }

    void setWages(double wages) {
        this.wages = wages;
    }

    int getHours() {
        return hours;
    }

    void setHours(int hours) {
        this.hours = hours;
    }

    void calculateSalary() {
        salary = hours * wages;
        setSalary(salary);
    }
}

class EmployeeRecords {
    public static void main(String[] args) {
        PermanentEmployee p = new PermanentEmployee();
        p.setName("Anil");
        p.setEmpId(101);
        p.setBasicPay(10000);
        p.setHra(1500);
        p.setExperience(3);
        p.calculateSalary();
        System.out.println("Permanent Employee: Your salary is: " + p.getSalary());
    }
}
