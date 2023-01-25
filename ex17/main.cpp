#include <iostream>

#include "Disciplina.hpp"
#include "EnumTipoDisciplina.hpp"
#include "CargaHorariaException.hpp"

using namespace ufpr;

int main(){
    Disciplina d1{"Programacao"}; //cria disciplina obrigatoria
    Disciplina d2{"C++", nullptr, EnumTipoDisciplina::OPTATIVA};
    Disciplina d3{"Grafos", nullptr, EnumTipoDisciplina::MANDATORIA};
    
    try {
        d1.setCargaHoraria(30);
        std::cout << "Disciplina " << d1.getNome() << " criada com sucesso." << std::endl;
    } catch (CargaHorariaException &che) {
        std::cout << "Erro de Carga Horaria: " << che.what() << che.cargaHoraria << std::endl;
    } catch (std::exception &ex) {
      std::cout << "Erro Generico: " << ex.what() << std::endl;
    }

    try {
        d2.setCargaHoraria(20);
        std::cout << "Disciplina " << d2.getNome() << " criada com sucesso." << std::endl;
    } catch (CargaHorariaException &che) {
        std::cout << "Erro de Carga Horaria: " << che.what() << che.cargaHoraria << std::endl;
    } catch (std::exception &ex) {
      std::cout << "Erro Generico: " << ex.what() << std::endl;
    }

    try {
        d3.setCargaHoraria(10);
        std::cout << "Disciplina " << d3.getNome() << " criada com sucesso." << std::endl;
    } catch (CargaHorariaException &che) {
        std::cout << "Erro de Carga Horaria: " << che.what() << che.cargaHoraria << std::endl;
    } catch (std::exception &ex) {
      std::cout << "Erro Generico: " << ex.what() << std::endl;
    }

    return 0;
}