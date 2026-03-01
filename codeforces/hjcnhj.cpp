else if(x<z-x && a>2*x)
       {
        while(a!=2*x)
        {
        
            b=b>>1;a=a-b;
            vec.push_back(2);

        }
        vec.push_back(1);
       }
       else if(z-x<x && b>2*(z-x))
       {
        while(b!=2*(z-x))
        {
            a=a>>1;b=b-a;
            vec.push_back(1);
        }
        vec.push_back(2);
       }