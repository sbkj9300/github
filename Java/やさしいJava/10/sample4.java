import java.io.*;

class sample4{
	public static void main(String[] args)throws IOException{
		System.out.println("整数を二つ入力してください。");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str1 = br.readLine();
		String str2 = br.readLine();
		int i = Integer.parseInt(str1);
		int j = Integer.parseInt(str2);
		
		int ans = Math.min( i , j );
		
		System.out.println(i+"と"+j+"のうち小さい方は"+ans+"です。");
	}
}