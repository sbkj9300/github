import java.io.*;

class sample5{
	public static void main (String[] args)throws IOException{
		System.out.println("自然数を入力してください。");
		
		BufferedReader br =
		 new BufferedReader (new InputStreamReader(System.in));
		 
		String str = br.readLine();
		int num = Integer.parseInt(str);
		
	boolean prime = true;
		
		if (num<2){
		System.out.println(num+"は素数ではありません。");
		prime = false;
		}
		
		else{
			int i=2;
			while(i<num){
				if(num%i==0){
					System.out.println(num+"は素数ではありません。");
					prime = false;
					break;
				}
				else
				 i++;
				}
		}
		if(prime)
		System.out.println(num+"は素数です。");
	}
}