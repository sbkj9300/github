import java.io.*;

class sample3{
	public static void main(String[] args) throws IOException{
		System.out.println("正方形の一辺の長さを入力してください。");
		
		BufferedReader br =
		 new BufferedReader(new InputStreamReader(System.in));
		 
		 String num = br.readLine();
		 
		 int edge  = Integer.parseInt(num);
		 
		 int area = edge*edge;
		 
		 System.out.println("正方形の面積は" + area +"です。");
	}
}