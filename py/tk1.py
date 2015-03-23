#!/usr/bin/env python      
import Tkinter as tk       

class Application(tk.Frame):              
    def __init__(self, master=None):
        tk.Frame.__init__(self, master)   
        self.grid(sticky=tk.N+tk.S+tk.E+tk.W)                       
        self.createWidgets()

    def createWidgets(self):
        top=self.winfo_toplevel()                
        top.rowconfigure(0, weight=1) 
        top.rowconfigure(1, weight=1)           
        top.columnconfigure(0, weight=1)         
        #self.rowconfigure(0, weight=1)
        #self.rowconfigure(1, weight=1)           
        self.columnconfigure(0, weight=1)
        
        self.hstNameLbl = tk.Label(self,text="Hostname:")
        self.hstNameLbl.grid(row=0,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.hstNameInp = tk.Entry(self)
        self.hstNameInp.grid(row=0,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.dbNameLbl = tk.Label(self,text="Database:")
        self.dbNameLbl.grid(row=1,column=0,sticky=tk.N+tk.S+tk.E+tk.W)       
        self.dbNameInp = tk.Entry(self)
        self.dbNameInp.grid(row=1,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.usrNameLbl = tk.Label(self,text="User Name:")
        self.usrNameLbl.grid(row=2,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.usrNameInp = tk.Entry(self)
        self.usrNameInp.grid(row=2,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.psswdLbl = tk.Label(self,text="Password:")
        self.psswdLbl.grid(row=3,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        self.psswdInp = tk.Entry(self)
        self.psswdInp.grid(row=3,column=1,sticky=tk.N+tk.S+tk.E+tk.W) 
        
        self.okButton = tk.Button(self, text='OK',
            command=self.quit)            
        self.okButton.grid(row=4,column=0,sticky=tk.N+tk.S+tk.E+tk.W)
        
        self.quitButton = tk.Button(self, text='Quit',
            command=self.quit)            
        self.quitButton.grid(row=4,column=1,sticky=tk.N+tk.S+tk.E+tk.W)
        
        #self.sillyButton = tk.Button(self, text='Silly')
        #self.sillyButton.grid(row=1, column=0,sticky=tk.N+tk.S+tk.E+tk.W)
                    

app = Application()                       
app.master.title('Sample application')    
app.mainloop()                        