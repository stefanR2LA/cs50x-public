#Taking input for the type of the game 501/301
type_game = int(input("What should be the score 501 or 301? "))
#Taking input for number of players
number_players = int(input("Enter the number of players: "))
players = {}
winners = []
#Inputing player names and adding scores.
if type_game == 301:
    for i in range(number_players):
        player = input("Enter player name: ")
        players[player] = 301
elif type_game == 501:
    for i in range(number_players):
        player = input("Enter player name: ")
        players[player] = 501
#List of players
for player in players:
    print(player, players[player])
#While loop to check if all players reached 0 points (Checking if the game is over)
while not all(points == 0 for points in players.values()):
    #Not to score players that reached 0 points
    for player in players:
        if (players[player] == 0):
            continue
        else:
            print("Next player to play is {} with {} points left.".format(player,players[player]))
            sum = 0
            #players throw 3 darts = 3 scores in the sum
            for i in range (3):
                dart = int(input("Input scored points in one throw: "))
                sum += dart
            #sum must not get total points in negative intiger
            if (players[player] - sum) > 0:
                players[player] -= sum
                print("{}, has points left {}".format(player, players[player]))
            #is thrown sum is more than the points left, those points dont count
            elif (players[player] - sum) < 0:
                print("{}, has points left {}".format(player, players[player]))
                continue
            #is deducted sum from points is 0 game is over for that player
            elif (players[player] - sum) == 0:
                print("{} is at 0!".format(player))
                players[player] = 0     #if player reaches 0 dictionary saves previous value - not sure why
                winners.append(player)
#printing winners after the game is over
print("Players finished in order: ")
for name in range(len(winners)):
    print(winners[name])

#improvements
#Force the user to put only 301 or 501 otherwise program crashes
#make a UI for the game
#cannot score more than 160 points per 3 throws! no cheating!
#maybe try sometign with AI to add a camera so it can score like that?
