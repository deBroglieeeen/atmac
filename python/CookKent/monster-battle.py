import requests

url = "https://ob6la3c120.execute-api.ap-northeast-1.amazonaws.com/Prod/battle/"
monsters = {0: 'dragon',1: 'griffin',2: 'medusa',3: 'troll',4: 'vampire'}

def get_battle_result(monster_a,monster_b):
  return requests.get(url = url + monster_a + "+" + monster_b)
results = [[0 for j in range(5)] for i in range(5)]
ans_dict = {}
for i in range(5):
  for j in range(5):
    if i != j:
      monster_a = monsters.get(i)
      monster_b = monsters.get(j)
      r = get_battle_result(monster_a,monster_b)
      data = r.json()
      if data.get('winner') == monster_a:
        results[i][j] = 1
      else:
        results[i][j] = 2
for i in range(5):
  ans_dict[monsters.get(i)] = results[i].count(1)
ans_list = sorted(ans_dict,key = ans_dict.get,reverse = True)
ans = ''
for i in range(5):
  if i == 4:
    ans += ans_list[i]
    print(ans)
  else:
    ans += ans_list[i] + ', '
