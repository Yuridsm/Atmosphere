class Atleta
{
private:
	int acertos;
	int tentativas;
	float percentual;

	void calcular();

public:
	void Exibir() const;
	Atleta Acumular();
};