import java.util.*;

class Divide2{
    public static void main(String[] arr){
        try{
            if(arr.length<2)
            throw(new Exception("two argument must be provided"));
            int a= Integer.parseInt(arr[0]);
            int b=Integer.parseInt(arr[1]);
            if(b==0)
            throw(new Exception("second argument should be non zero"));
            int c=a/b;
            System.out.println("result:"+c);
        }catch(Exception e){
            System.out.println(e);
        }
    }
}