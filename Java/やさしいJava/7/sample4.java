import java.io.*;

class sample4{
	public static void main(String[] args)throws IOException{
			System.out.println("５人のテストの点数を入力してください。");
			
			int[] test;
			test = new int[5];
			
			BufferedReader br =
			 new BufferedReader (new InputStreamReader(System.in));
			 
			 for(int i=0;i<5;i++){
			 String str = br.readLine();
			 test[i] = Integer.parseInt(str);
			 }
			 int j =0;
			 while(j<5){
			 	System.out.println((j+1)+"番目の人のテストの点数は"+test[j]+"点です。");
			 	j++;
			 }
			 
			 //点数のソート 箱の番号は最大で４
			 for (int k=0;k<5;k++){
			 	for (int l=0;l<4;l++){
			 		if(test[l]<test[l+1]){
			 			int temp=test[l+1];
			 			test[l+1]=test[l];
			 			test[l]=temp;
			 		}
				}
			 }
			 			
			 
			 
			 System.out.print("点数は高い人から順に");
			 int n =0;
			 while (n<5){
			 	System.out.print(test[n]+",");
			 	n++;
			 }
			 System.out.println("です。");
			 
			 
		}
}
			// String str1 = br.readLine();
			 //String str2 =