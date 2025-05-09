% Sample data
project_data = [202, 164, 179, 162, 188];  
wireless_mouse_data = [205, 209, 274, 245, 237];
wired_mouse_data = [204, 245, 191, 180, 247];

% Calculate means
means = [mean(project_data), mean(wireless_mouse_data), mean(wired_mouse_data)];

% Create figure with wider width to spread out labels
figure('Position', [100, 100, 900, 500]);

% Create bar graph
bar(means);

% Add some padding on x-axis to spread bars and labels
xlim([0.5 3.5]);

% Set x-tick labels with spacing
xticks(1:3);
xticklabels({'TM4C123GH6PM', 'Website (Wireless)', 'Website (Wired)'});

% Add axis labels and title
xlabel('Testing Method');
ylabel('Average Reaction Time (ms)');
title('Comparison of Average Reaction Times');

% Display values on top of each bar
text(1:length(means), means, num2str(means', '%.1f'),'HorizontalAlignment', 'center', 'VerticalAlignment', 'bottom');

% Add grid for readability
grid on;