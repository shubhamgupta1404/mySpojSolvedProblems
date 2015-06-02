import java.util.Scanner;
import java.math.*;

class Ideone {
	public static String Factors(BigInteger n)
	{
		BigInteger one = BigInteger.valueOf(1);
		BigInteger two = BigInteger.valueOf(2);
		BigInteger ans = BigInteger.valueOf(0);
		while (n.mod(two).equals(BigInteger.ZERO))
		{
			ans = ans.add(one);
			n = n.divide(two);
		}
		if (n.compareTo(BigInteger.ONE) > 0)
		{
			BigInteger f = BigInteger.valueOf(3);
			while (f.multiply(f).compareTo(n) <= 0)
			{
				if (n.mod(f).equals(BigInteger.ZERO))
				{
					ans = ans.add(one);
					n = n.divide(f);
				}
				else
				{
					f = f.add(two);
				}
			}
			ans = ans.add(one);
		}
		ans = ans.mod(BigInteger.valueOf(1000000007));
		return(""+ans);
	}

	public static void main(String args[]) {
		try{
			Scanner in=new Scanner(System.in);
			int t=in.nextInt();
			String f = "1";
			for(int i=1;i<=t;i++){
				int a=in.nextInt();
				BigInteger a0=new BigInteger(f);
				for(int j=a;j>0;j--){
					BigInteger a1=new BigInteger(Integer.toString(j));
					a0 = a0.multiply(a1);
				}
				if(a==0 || a==1){
					System.out.println("1");
				}
				else{
					String out = Factors(a0);
					System.out.println(out);
				}
				
			}
			in.close();
		}
		catch(Exception e){
			return;
		}
	}
}
