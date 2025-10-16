# Automação: scripts/autocommit.sh

Este repositório inclui um script simples para automatizar a compilação de arquivos C na pasta `Modolo1`, commitar e enviar para o remoto.

Como usar

1. Torne o script executável:

   chmod +x scripts/autocommit.sh

2. Execute com uma mensagem de commit (opcional):

   ./scripts/autocommit.sh "Minha mensagem de commit"

O script fará:
- Compilar todos os arquivos `*.c` em `Modolo1` com `gcc` (padrão C11).
- Gerar executáveis com o mesmo nome (sem extensão) na mesma pasta.
- `git add -A` e `git commit -m "mensagem"`.
- `git push origin main`.

Notas e precauções
- O script assume que `origin` e o branch `main` existem e que você tem permissão para push.
- O script aborta se alguma compilação falhar.
- Use com cuidado: `git add -A` adiciona todas as mudanças no repositório.

Contribuições
- Se quiser aprimorar (ex: filtrar por arquivos, usar branch separada, adicionar --dry-run), abra um PR com as mudanças.
