# Estudos de Computação Paralela

Este repositório contém materiais, códigos e experimentos relacionados ao estudo de **MPI (Message Passing Interface)**, **OpenMP** e **Pthreads** e técnicas de computação paralela. 

## ℹ️ Sobre

Este é um repositório de estudo pessoal focado em técnicas de computação paralela. Você encontrará apenas códigos feitos na pasta `src`. O objetivo deste repositório é explorar e experimentar com **MPI**, **OpenMP** e **Pthreads**, proporcionando uma base sólida para o desenvolvimento de aplicações paralelas. Sinta-se à vontade para explorar, modificar e utilizar os códigos conforme necessário para seus próprios estudos e projetos.


## 📄 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 🔧 Pré-requisitos

Antes de começar, certifique-se de ter o ambiente configurado:

1. **Compilador com suporte a MPI** (e.g., `mpicc`, `mpicxx`):
    - No Linux: instale o OpenMPI ou MPICH.
    - No Windows: utilize o WSL ou distribuições compatíveis com MPI.
2. **Ferramentas de Desenvolvimento**:
    - GCC ou outro compilador C/C++.
    - Make ou CMake para gerenciar builds (opcional).

Para instalar o OpenMPI no Ubuntu:
```bash
sudo apt update
sudo apt install openmpi-bin libopenmpi-dev
```

3. **Ambiente para OpenMP e Pthreads**:
    - GCC ou outro compilador C/C++ com suporte a OpenMP.
    - Bibliotecas pthreads (geralmente já incluídas em sistemas Unix-like).
