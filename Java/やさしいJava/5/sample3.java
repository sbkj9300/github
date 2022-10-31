import java.io.*;
class sample3{
	public static void main(String[] args)throws IOException{
		System.out.println("２つの整数を入力してください。");
		
		BufferedReader br=
		 new BufferedReader (new InputStreamReader(System.in));
		 
		 String str1 = br.readLine();
		 String str2 = br.readLine();
		 
		 int res1 = Integer.parseInt(str1);
		 int res2 = Integer.parseInt(str2);
		 
		 if (res1==res2)
		 	System.out.println("２つは同じ値です。");
		 else if (res1<res2)
		 	System.out.println(res2+"は"+res1+"より大きいです。");
		 else
		 	System.out.println(res1+"は"+res2+"より大きいです。");
		}
}
		 