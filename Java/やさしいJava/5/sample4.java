import java.io.*;

class sample4{
	public static void main(String[] args)throws IOException{
		System.out.println("０〜１０までの数字を入力してください。");
		
		BufferedReader br =
		 new BufferedReader(new InputStreamReader(System.in));
		 
		 String str = br.readLine();
		 
		int res = Integer.parseInt(str);
		
		if (0<=res && res<=10)
			System.out.println("正解です。");
		else
			System.out.println("間違いです。");
	}
} 