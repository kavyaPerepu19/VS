abstract class EventReg {
    String name;
    String eventName;
    double regFee;
    EventReg(String name,String eventName)
    {
        this.name=name;
        this.eventName=eventName;
    }
    String getName()
    {
        return name;

    }
    void  setName(String name)
    {
        this.name=name;
    }
    String getEventName() {
        return eventName;
    }
    void setEventName(String eventName)
    {
        this.eventName=eventName;

    }
    double getRegFee()
    {
        return regFee;
    }
    void setRegFee(double regFee) {
        this.regFee = regFee;
    }
   abstract void registerEvent();

    
}
class SER extends EventReg{
    int playerNum;
    SER(String name,String eventName,int playerNum)
    {
        super(name,eventName);
        this.playerNum=playerNum;

    }
    void setPlayerNum(int playerNum) {
        this.playerNum = playerNum;
    }
    int getPlayerNum()
    {
        return playerNum;
    }
    @Override
    void registerEvent()
    {
        System.out.println("  Events             Base Fee");
        System.out.println(" ShakeALeg              50");
        System.out.println(" Sing&Win               60");
        System.out.println(" Actathon               80");
        System.out.println(" PlayAway              100");
    }

}
class TER extends EventReg{
    int noOfPart;
    int teamNo;
    TER(String name,String eventName,int noOfPart,int teamNo)
    {
        super(name,eventName);
        this.teamNo=teamNo;
        this.noOfPart=noOfPart;

    }
    void registerEvent() {
        System.out.println("  Events             Base Fee");
        System.out.println(" ShakeALeg              100");
        System.out.println(" Sing&Win               150");
        System.out.println(" PlayAway               100");
    }
}
class ERmain{
   static  void printline()
    {
        System.out.println("_________________________________________________________");
    }
    public static void main(String[] args) {
        SER s1=new SER("Jenny","Sing&Win",1);
        s1.registerEvent();
        printline();
        TER t1=new TER("Aura", "ShakeALeg", 1, 5);
        t1.registerEvent();
        printline();
        SER s2=new SER("Hudson", "PlayAway", 2);
        s2.registerEvent();
        printline();

    }
}