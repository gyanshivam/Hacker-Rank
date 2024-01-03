//14................


    String s = Integer.toString(n);


//15..............


static boolean flag = true;
static int B,H;

static
{
        Scanner s = new Scanner(System.in);
        B = s.nextInt();
        s.nextLine();
        H = s.nextInt();
        
        s.close();
        
        if(B>0 && H>0)
            flag = true;
        else
        {
            flag = false;
            System.out.println("java.lang.Exception: Breadth and height must be positive");
        }   
}

