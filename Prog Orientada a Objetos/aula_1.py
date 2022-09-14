class Pessoa:
  def __init__(self, cpf, celular):
    self.cpf = cpf
    self.celular = celular
    
  def mostra_dados(self):
  	print("O CPF: " + self.cpf + " - O Telefone: " + str(self.celular))
  	
    
p1 = Pessoa("44444554444", 16999992222)

p1.mostra_dados()