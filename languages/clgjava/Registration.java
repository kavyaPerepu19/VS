// import java.util.*;
public class Registration {
    String custName;
    String panNo;
    String passportNo;
    int vId;
    long[] mNo;
    int liNo;
    Registration(String custName,String passportNo,long[] mNo)
    {
        this.custName=custName;
        this.passportNo=passportNo;
        this.mNo=mNo;
    }
    Registration(String custName,int liNo,String panNo,long[] mNo)
    {
        this.custName=custName;
        this.liNo=liNo;
        this.panNo=panNo;
        this.mNo=mNo;
    }
    Registration(String custName,int vId,int liNo,long[] mNo)
    {
        this.custName=custName;
        this.liNo=liNo;
        this.mNo=mNo;
        this.vId=vId;
    }
    Registration(String custName,String panNo,int vId,long[] mNo)
    {
        this.custName=custName;
        this.panNo=panNo;
        this.mNo=mNo;
        this.vId=vId;
    }
    String getCustomerName(){
        return custName;
    }
    String getPanCardNo()
    {
        return panNo;
    }
    String getPassportNo()
    {
        return passportNo;
    }
    int getVoterId()
    {
        return vId;
    }
    int getLicensenceNo(){
        return liNo;
    }
    long[] getphoneNo()
    {
        return mNo;
    }
    void show() {
        System.out.println("Congratulations, " + custName + "!!! You have been successfully registered for our services with the following details:");
    
        if (passportNo != null && !passportNo.isEmpty()) {
            System.out.println("Passport number: " + passportNo);
        }
    
        if (panNo != null && !panNo.isEmpty()) {
            System.out.println("Pan card number: " + panNo);
        }
    
        if (vId != 0) {
            System.out.println("Voter ID: " + vId);
        }
    
        if (liNo != 0) {
            System.out.println("License number: " + liNo);
        }
    
        if (mNo != null && mNo.length > 0) {
            System.out.print("Phone numbers: ");
            for (long num : mNo) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
    
}
class Rmain
{
    public static void main(String[] args) {
        long[]mno={999999999,888888888};
        Registration r=new Registration("Kevin","MN9891N" , mno);
        r.show();

    }
}
