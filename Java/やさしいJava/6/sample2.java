import java.io.*;

class sample2{
	public static void main(String[] args)throws IOException{
		System.out.println("テストの点数を入力してください。(０で終了)");
		
		BufferedReader br=
		 new BufferedReader(new InputStreamReader(System.in));
		 
		 int i=0;
		 int sum=0;
		 while(i==0){
		 	String str = br.readLine();
		 	int res = Integer.parseInt(str);
		 	
		 	if(res != 0)
		 		sum+=res;
		 	
		 	else
		 		i++;
		 }
		 System.out.println("テストの点数の合計は"+sum+"点です。");
		}
}
		 
		 