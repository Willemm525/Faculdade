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
    
class Aluno(Pessoa):
  def __init__(self):
    Pessoa.__init__(self)
    self.__ra = ""
    
  def get_ra(self):
    return self.__ra
    
  def set_ra(self, ra):
    self.__ra = ra

p1 = Aluno()
p1.set_nome("Raul")
p1.set_cpf(45491167819)
p1.set_ra(2840482111021)
print("Olá " + p1.get_nome() + " - CPF: " + str(p1.get_cpf()) + " RA: " + str(p1.get_ra()))  