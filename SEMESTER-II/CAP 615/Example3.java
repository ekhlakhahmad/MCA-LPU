import javax.swing.*;    
class Example3
{    
    JFrame f;    
    Example3()
    {    
    f=new JFrame();    
    String data[][]={ {"101","JOHN","50000"},    
                      {"102","JOE","78000"},    
                      {"101","ROBIN","70000"}};    
    String column[]={"E_ID","E_NAME","E_SALARY"};         
    JTable jt=new JTable(data,column);    
    jt.setBounds(30,40,200,300);          
    JScrollPane sp=new JScrollPane(jt);    
    f.add(sp);          
    f.setSize(300,400);    
    f.setVisible(true);    
    }     
public static void main(String[] args) 
{    
    new Example3();    
}    
}