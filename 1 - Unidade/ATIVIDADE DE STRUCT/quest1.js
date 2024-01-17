const prompt = require("readline-sync") // biblioteca do node

console.log("CADASTRAMENTO DE DADOS DE FUNCIONARIOS: \n")

let dadosDosFuncionarios = []

function cadastro (){
    const registro = {}
    registro.nome = prompt.question("Digite o nome completo: ")
    registro.salario = prompt.questionFloat("Digite o salario: ")
    registro.cpf = prompt.questionFloat("Digite o cpf: ")
    registro.cargo = prompt.question("Digito o cargo: ")

    return registro
}

function imprimirDados(dados) {
    for (let i = 0; i < dados.length; i++) {
        console.log(`Dados pessoais ${i + 1}:`);
        console.log(`Nome: ${dados[i].nome}`);
        console.log(`Salário: ${dados[i].salario}`);
        console.log(`CPF: ${dados[i].cpf}`);
        console.log(`Cargo: ${dados[i].cargo}\n`);
    }
}

function analiseDedados(dados){
    let maiorSalario = dados[0].salario
    let nome = dados[0].nome
    let cargo = dados[0].cargo

    for(let i = 0; i < dados.length; i++){
        if(dados[i].salario > maiorSalario){
            maiorSalario = dados[i].salario 
            nome = dados[i].nome
            cargo = dados[i].cargo
        }
    }

    console.log(`MAIOR SALARIO: `);
    console.log(`Nome: ${nome}`);
    console.log(`Salário: ${maiorSalario}`);
    console.log(`Cargo: ${cargo}\n`);
    
    
}


function main(){
    let op = 0

    do{    
    console.log("======== MENU ======== \n"+
    "\n1 - Cadastro de dados dos funcionarios "+
    "\n2 - Imprimir dados dos funcionarios "+
    "\n3 - Alterar dados "+
    "\n4 - Analisar dados "+
    "\n5 - Sair")  

    op = prompt.questionInt("Digite a opção: ")

    switch(op){
        case 1:
            dadosDosFuncionarios.push(cadastro())
            break
        case 2:
            imprimirDados(dadosDosFuncionarios)
            break
        case 3:
            imprimirDados(dadosDosFuncionarios)
            let escolha = prompt.questionInt("Digite posicição do funcionario: ")

            dadosDosFuncionarios[escolha - 1].nome = prompt.question("Digite o novo nome: ")
            dadosDosFuncionarios[escolha - 1].salario = prompt.questionFloat("Digite o novo salario: ")
            dadosDosFuncionarios[escolha - 1].cpf = prompt.questionFloat("Digite o novo cpf: ")
            dadosDosFuncionarios[escolha - 1].cargo = prompt.question("Digite o novo cargo: ")

            console.log("Dados alterados com sucesso! \n")
            break
        case 4:
            analiseDedados(dadosDosFuncionarios)
            break
        case 5:
            console.log("Saindo......")
            break
        default:
            console.log("não existe essa opção! ")
            break


    }
    

    }while  (op != 5)
}


main()