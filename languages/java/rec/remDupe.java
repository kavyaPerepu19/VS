package rec;

public class remDupe {
    String rem(String s)
    {
        if(s.length()==1)
        {
            return s;
        }
        else{
            if(s.charAt(0)==s.charAt(1))
            {
                return rem(s.substring(1));
            }
            else{
                return s.charAt(0)+rem(s.substring(1));
            }
        
        }
    }
    public static void main(String[] args) {
        remDupe x=new remDupe();
        System.out.println(x.rem("aabbcc"));
    }
}

