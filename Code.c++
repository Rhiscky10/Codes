% program generates a random number between 1 and 20
% user has to guess it from 20 tries

nr = randi([1,20]);
i = 0;
choice = input('Guess the number(you have 20 shots): ');

while choice ~= nr
    i = i+1;
    if i<3
        % choice = input('You have %d more tries! ', i);
    else
        fprintf ('You blew it! The number was %d\n', nr)
        break
    end
end
if choice == nr
    fprintf('Congratulations, you guessed the number %d!\n', nr)
end