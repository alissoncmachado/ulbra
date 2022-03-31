const livros = require('./listaLivros')

function menorValor(arrProdutos, posicaoInicial) {
    let menorPreco = posicaoInicial;

    for (atual= posicaoInicial; atual < arrProdutos.length; atual++){
        if (arrProdutos[atual].preco < arrProdutos[menorPreco].preco) {
        menorPreco = atual
        }
    }
    return menorPreco;
}

module.exports = menorValor;
