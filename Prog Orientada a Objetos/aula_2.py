class Pessoa:
  def __init__(self):
    self.__nome = ""
    self.__cpf = ""
    
  def get_nome(self):
    return self.__nome

  def set_nome(self, nome):
    self.__nome = nome
    
  def get_cpf(self):
    return self.__cpf
    
  def set_cpf(self, cpf):
    self.__cpf = cpf
    
  def mostra_dados(self):
    print("Olá " + self.nome + " - CPF: " + str(self.cpf))
    
p1 = Pessoa()
p1.nome = "Raul"
p1.cpf = 45491167819

p1.mostra_dados()