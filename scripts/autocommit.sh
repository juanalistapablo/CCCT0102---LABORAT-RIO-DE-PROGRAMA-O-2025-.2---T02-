#!/usr/bin/env bash
# Script simples para compilar arquivos .c em Modolo1, adicionar, commitar e dar push
# Uso: ./scripts/autocommit.sh "Mensagem do commit"
set -euo pipefail

REPO_ROOT="$(cd "$(dirname "$0")/.." && pwd)"
MOD_DIR="$REPO_ROOT/Modolo1"
COMMIT_MSG="${1:-Atualiza e compila códigos C}"

echo "Repo root: $REPO_ROOT"

# Compilar todos os .c em Modolo1 em executáveis com mesmo nome sem extensão
shopt -s nullglob
for src in "$MOD_DIR"/*.c; do
  exe="$MOD_DIR/$(basename "${src%.*}")"
  echo "Compilando $src -> $exe"
  gcc -Wall -Wextra -std=c11 "$src" -o "$exe" || {
    echo "Falha ao compilar $src" >&2
    exit 1
  }
done

# Adicionar arquivos gerados e mudanças
cd "$REPO_ROOT"

git add -A

echo "Criando commit: $COMMIT_MSG"
git commit -m "$COMMIT_MSG" || {
  echo "Nenhuma mudança para commitar." >&2
}

# Push para origin main
git push origin main

echo "Automação finalizada."