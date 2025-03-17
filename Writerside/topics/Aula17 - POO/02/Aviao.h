#ifndef  AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

/*
	* Em arquivos separados deve se usar essa estrutura:
		#ifndef  AVIAO_H_INCLUDED
		#define AVIAO_H_INCLUDED
		
		#endif  AVIAO_H_INCLUDED // AVIAO_H_INCLUDED
		
	* Arquivos fonte separados normalmente são Headers (cabeçaslho)
	
	* O metodo Construtor é o metodo que vai ser executado 
	¬ primeiro assim que a Classe for instanciada
*/
class Aviao {
	public:
		int vel = 0;
		int velMax;
		std::string tipo;
		Aviao(int tp);
		
	private:	
	
};

#endif  AVIAO_H_INCLUDED // AVIAO_H_INCLUDED
