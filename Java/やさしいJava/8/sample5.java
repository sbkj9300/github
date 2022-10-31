class Mypoint{
	int x;
	int y;
	void setX(int px){
		x = px;
	}
	
	void setY(int py){
		y=py;
	}
	
	int getX(){
		return x;
	}
	
	int getY(){
		return y;
	}
}

class sample5{
	public static void main (String[] args){
		 Mypoint p1;
		 p1 =new Mypoint();
		 p1.setX(21);
		 p1.setY(98);
		 
		 int px = p1.getX();
		 int py = p1.getY();
		 
		 System.out.println("x座標、y座標はそれぞれ"+px+"と"+py);
		}
}