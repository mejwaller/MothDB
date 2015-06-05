#!/usr/bin/env python      
import Tkinter as tk   
import MyDialog as d    

class Application(tk.Frame):              
    def __init__(self, master):
        tk.Frame.__init__(self, master)
        self.parent = master
        self.constructUI()
        
    def constructUI(self):
        self.parent.title("Moth records database")  
        menuBar = tk.Menu(self.parent)
        self.parent.config(menu=menuBar) 
        
        fileMenu = tk.Menu(menuBar)
        fileMenu.add_command(label="Connect...", command=self.onConnectCmd)
        fileMenu.add_command(label="Quit", command=self.onExit)
        
        menuBar.add_cascade(label="File", menu=fileMenu)
                
        
    def onConnectCmd(self):
        dlg = ConnectDlg(self)
     
    def onExit(self):
        self.quit()                

class ConnectDlg(d.MyDialog):
    
    def abody(self, master):

        tk.Label(master, text="First:").grid(row=0)
        tk.Label(master, text="Second:").grid(row=1)

        self.e1 = tk.Entry(master)
        self.e2 = tk.Entry(master)

        self.e1.grid(row=0, column=1)
        self.e2.grid(row=1, column=1)
        return self.e1 # initial focus

   #def apply(self):
   #     first = int(self.e1.get())
   #     second = int(self.e2.get())
   #     print first, second # or something
        
    def body(self,master):        
        self.hstNameLbl = tk.Label(master,text="Hostname:")
        self.hstNameLbl.grid(row=0,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.hstNameInp = tk.Entry(master)
        self.hstNameInp.insert(0,"localhost")
        self.hstNameInp.grid(row=0,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.dbNameLbl = tk.Label(master,text="Database:")
        self.dbNameLbl.grid(row=1,column=0,sticky=tk.N+tk.S+tk.E+tk.W)       
        self.dbNameInp = tk.Entry(master)
        self.dbNameInp.insert(0,"mothrecs")
        self.dbNameInp.grid(row=1,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.usrNameLbl = tk.Label(master,text="User Name:")
        self.usrNameLbl.grid(row=2,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.usrNameInp = tk.Entry(master)
        self.usrNameInp.insert(0,"martin")
        self.usrNameInp.grid(row=2,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.psswdLbl = tk.Label(master,text="Password:")
        self.psswdLbl.grid(row=3,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.psswdInp = tk.Entry(master,show="*")
        self.psswdInp.grid(row=3,column=1,sticky=tk.N+tk.S+tk.E+tk.W) 
        
        return self.psswdInp#initial focus
        
        
     


#app = Application()                       
#app.master.title('Sample application')    
#app.mainloop() 

root = tk.Tk()
app = Application(root)    
root.mainloop()                   