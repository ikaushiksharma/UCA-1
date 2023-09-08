class Prisoners{
	private int black=-1;
	private int white=1;
	private int[] prisoners;
	public Prisoners(int n){
		prisoners=new int[n];
		for(int i=0;i<n;i++){
			prisoners[i]=(int)(Math.random*100)%2==0?black:white;
		}
	}
	public int getCode(int p){
		int code=1
		for(int i=0;i<p;i++)
			code*=prisoners[i];
		return code;
	}
	public boolean deadOrAlive(int i,int code){
		return code==prisoners[i];
	}
}

public class PrisonerProblem{
	public static void main(){
		Prisoners p=new Prisoner(10);
		int expectedCode=1;
		for(int i=n-1;i>=0;i--){
			int code=p.getCode(i)*expectedCode;
			if(p.deadOrAlive(i,code)
				System.out.println("Alive");
			else
				System.out.println("You are alive");
			expectedCode=code*expectedCode;
		}
	}
}

