class Solution {
public:
    double angleClock(int hour, int minutes) {
       double h_d = 0;
       h_d = (hour * 360)/12;
        if(h_d==360)h_d = 0;
        
        cout<<h_d<<endl;
        double m_d = 0;
        m_d = (minutes * 360 )/60;
        if(m_d==360)m_d = 0;
        
        cout<<m_d<<endl;
        
        double e_d = (double)(minutes*5)/10;
        h_d = h_d + e_d;
        cout<<h_d<<endl;
        if(abs(m_d - h_d)>180)
            return 360-abs(m_d - h_d);
        return abs(m_d - h_d);
    }
};
