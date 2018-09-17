import java.util.Scanner;

public class CitizenAttentionOffices {
    public static void main(String[] args){
        Scanner cin=new Scanner(System.in);
        int t=cin.nextInt();

        while(t-- > 0){
           int n=cin.nextInt();
           int ex[][]=new int[n][3];
           for(int i=0;i<n;i++){
               ex[i][0]=cin.nextInt();
               ex[i][1]=cin.nextInt();
               ex[i][2]=cin.nextInt();
           }


           int mdist=Integer.MAX_VALUE;
            String mdistArr="";
           for(int i=0;i<25-4;i++){
              for(int j=i+1;j<25-3;j++) {
                  for(int k=j+1;k<25-2;k++){
                      for(int l=k+1;l<25-1;l++){
                          for(int m=l+1;m<25;m++){
                              int com[]={i,j,k,l,m};
                              int mcostSum=0;
                              for(int ii=0;ii<n;ii++){
                                  int mcost= Integer.MAX_VALUE;
                                  for(int ci=0;ci<5;ci++){
                                     int cost=ex[ii][2]*(Math.abs(com[ci]/5-ex[ii][0])+Math.abs(com[ci]-com[ci]/5*5-ex[ii][1]));
                                     mcost=Math.min(mcost,cost);
                                  }
                                  mcostSum+=mcost;
                              }
                              if(mcostSum<mdist){
                                  mdist=mcostSum;
                                  mdistArr= ""+com[0];
                                  for(int x=1;x<5;x++){
                                     mdistArr+=" "+com[x];
                                  }
                              }
                          }
                      }
                  }
              }
           }
            System.out.println(mdistArr);

        }

    }

}
